// OoT3D decomp @ 00460528  name=FUN_00460528  size=424

void FUN_00460528(undefined4 param_1,short *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  uint extraout_r2;
  int *piVar4;
  short *psVar5;
  int *piVar6;

  iVar1 = (int)*param_2;
  psVar3 = param_2;
  if (iVar1 != 0) {
    psVar3 = *(short **)(param_2 + 0x66);
  }
  if (iVar1 != 0 && psVar3 != (short *)0x0) {
    psVar5 = param_2 + 2;
    psVar3 = param_2 + iVar1 * 2 + 2;
    param_2[0x14e] = 0;
    iVar1 = DAT_004606d0;
    param_2[0x14f] = 0;
    if (psVar5 < psVar3) {
      do {
        piVar6 = *(int **)psVar5;
        if (piVar6 != (int *)0x0) {
          psVar3 = (short *)(uint)*(byte *)(piVar6 + 4);
        }
        if ((piVar6 != (int *)0x0 && ((uint)psVar3 & 1) != 0) &&
           (((*piVar6 == 0 || (*(int *)(*piVar6 + 0x13c) != 0)) &&
            (psVar3 = param_2 + 0x68, psVar3 < param_2 + *(int *)(param_2 + 0x66) * 2 + 0x68)))) {
          do {
            piVar4 = *(int **)psVar3;
            if (piVar4 != (int *)0x0) {
              param_3 = (uint)*(byte *)((int)piVar4 + 0x11);
            }
            if ((piVar4 != (int *)0x0 && (param_3 & 1) != 0) &&
               ((iVar2 = *piVar4, iVar2 == 0 || (*(int *)(iVar2 + 0x13c) != 0)))) {
              param_3 = param_3 & *(byte *)(piVar6 + 4);
              if (((param_3 & 0x38) != 0 && piVar4 != piVar6) &&
                 ((((*(byte *)(piVar6 + 4) & 0x40) != 0 || (*piVar6 == 0)) || (*piVar6 != iVar2))))
              {
                (**(code **)(iVar1 + (uint)*(byte *)((int)piVar6 + 0x15) * 0x10 +
                            (uint)*(byte *)((int)piVar4 + 0x15) * 4))(param_1,param_2,piVar6);
                param_3 = extraout_r2;
              }
            }
            psVar3 = psVar3 + 2;
          } while (psVar3 < param_2 + *(int *)(param_2 + 0x66) * 2 + 0x68);
        }
        psVar5 = psVar5 + 2;
        psVar3 = param_2 + *param_2 * 2 + 2;
      } while (psVar5 < psVar3);
    }
    iVar1 = DAT_004606d4;
    psVar5 = param_2 + 0x68;
    psVar3 = param_2 + *(int *)(param_2 + 0x66) * 2 + 0x68;
    if (psVar5 < psVar3) {
      do {
        piVar6 = *(int **)psVar5;
        if (piVar6 != (int *)0x0) {
          psVar3 = (short *)(uint)*(byte *)((int)piVar6 + 0x11);
        }
        if ((piVar6 != (int *)0x0 && ((uint)psVar3 & 1) != 0) &&
           ((*piVar6 == 0 || (*(int *)(*piVar6 + 0x13c) != 0)))) {
          (**(code **)(iVar1 + (uint)*(byte *)((int)piVar6 + 0x15) * 4))(param_1,param_2);
        }
        psVar5 = psVar5 + 2;
        psVar3 = param_2 + *(int *)(param_2 + 0x66) * 2 + 0x68;
      } while (psVar5 < psVar3);
    }
  }
  return;
}
