using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Zenject;
public class ZenjectInstaller : MonoInstaller 
{
    public override void InstallBindings()
    {
        Container.Bind<InputController>().FromComponentInHierarchy().AsSingle();
        Container.Bind<GameManager>().FromComponentInHierarchy().AsSingle();
        Container.Bind<ParticleManager>().FromComponentInHierarchy().AsSingle();
        Container.Bind<PlayerCar>().FromComponentInHierarchy().AsSingle();
    }
}
