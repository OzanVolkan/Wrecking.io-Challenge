using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class EnemyMovement : MonoBehaviour
{
    public Transform[] waypoints; // Hedef noktalarý tutar.

    private int currentWaypointIndex = 0;
    private NavMeshAgent agent;

    private void Start()
    {
        agent = GetComponent<NavMeshAgent>();
        SetNextWaypoint();
    }

    private void Update()
    {
        if (!agent.pathPending && agent.remainingDistance < 5f)
        {
            //SetNextWaypoint();
        }
    }

    private void SetNextWaypoint()
    {
        if (waypoints.Length == 0) return;

        Vector3 newTarget = new Vector3(waypoints[currentWaypointIndex].position.x, transform.position.y, waypoints[currentWaypointIndex].position.z);
        agent.SetDestination(newTarget);

        // Bir sonraki hedefe gitmek için indeksi artýr.
        currentWaypointIndex = (currentWaypointIndex + 1) % waypoints.Length;
    }
}
