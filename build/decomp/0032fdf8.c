// OoT3D decomp @ 0032fdf8  name=FUN_0032fdf8  size=416

undefined4 FUN_0032fdf8(int param_1,int param_2)

{
  undefined4 uVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;

  psVar3 = (short *)FUN_00346e2c(DAT_0032ff9c,DAT_0032ff98);
  uVar6 = 0;
  if (psVar3 != (short *)0x0) {
    sVar2 = FUN_0036e800(param_2,psVar3);
    uVar6 = DAT_0032ffa0;
    iVar8 = (int)(short)(sVar2 - *(short *)(param_2 + 0xbe));
    *(short *)(param_2 + 0x36) = *(short *)(param_2 + 0xbe) + 0x3fff;
    iVar4 = FUN_003740fc(uVar6,param_2,param_1);
    uVar1 = DAT_0032ffa4;
    uVar7 = (uint)(iVar4 != 0);
    iVar5 = FUN_003740fc(DAT_0032ffa4,param_2,param_1);
    iVar4 = DAT_0032ffa8;
    *(undefined2 *)(param_2 + 0x36) = *(undefined2 *)(param_2 + 0xbe);
    if (iVar5 != 0) {
      uVar7 = uVar7 | 2;
    }
    if ((((*(int *)(param_2 + 0x98) < iVar4) || (uVar7 == 3)) &&
        (iVar4 = FUN_003740fc(DAT_0032ffac,param_2,param_1), iVar4 == 0)) || (*psVar3 == 0x66)) {
      FUN_00328d50(param_2);
    }
    else {
      *(short *)(param_2 + 0x36) = *(short *)(param_2 + 0xbe) + 0x3fff;
      if (uVar7 == 0) {
        uVar7 = *(uint *)(DAT_0032ffb0 + param_1) & 1;
      }
      iVar4 = iVar8;
      if (iVar8 < 0) {
        iVar4 = -iVar8;
      }
      if (iVar4 - 0x2000U < 0x4000) {
        if (iVar8 + 0x5ffeU <= DAT_0032ffb4) {
          if ((uVar7 & 1) == 0) {
            FUN_003170f4(DAT_0032ffbc,param_2);
          }
          else {
            FUN_003170f4(DAT_0032ffb8,param_2);
          }
        }
      }
      else if ((uVar7 & 1) == 0) {
        FUN_003170f4(uVar6,param_2);
      }
      else {
        FUN_003170f4(uVar1,param_2);
      }
    }
    uVar6 = 1;
  }
  return uVar6;
}
