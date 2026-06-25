// OoT3D decomp @ 001da0d4  name=FUN_001da0d4  size=416

void FUN_001da0d4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  short sVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  
  FUN_0037632c(param_1,param_1 + 0x3f8,param_3,param_4,param_4);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x3f8);
  FUN_003731e0(param_1 + 0x1a4);
  uVar4 = *(uint *)(param_1 + 0x1d4);
  bVar8 = uVar4 == 3;
  if (bVar8) {
    uVar4 = (uint)*(ushort *)(param_1 + 0x450);
  }
  if ((bVar8 && uVar4 == 0) &&
     (*(undefined2 *)(param_1 + 0x47c) = 0, *(short *)(param_1 + 0x47e) == 2)) {
    *(undefined2 *)(param_1 + 0x480) = 2;
  }
  else if (((*(short *)(param_1 + 0x47c) == 0) ||
           (sVar2 = *(short *)(param_1 + 0x47c) + -1, *(short *)(param_1 + 0x47c) = sVar2,
           sVar2 == 0)) &&
          (sVar2 = *(short *)(param_1 + 0x47e) + 1, *(short *)(param_1 + 0x47e) = sVar2, 2 < sVar2))
  {
    uVar3 = FUN_003702c8(0x1e);
    *(undefined2 *)(param_1 + 0x47c) = uVar3;
    *(undefined2 *)(param_1 + 0x47e) = 0;
  }
  (**(code **)(param_1 + 0x3f4))(param_1,param_2);
  if (*(int *)(param_1 + 0x1d4) == 3) {
    if (*(short *)(param_1 + 0x450) == 0) {
      if (*(short *)(param_1 + 0x47a) != 0) {
        FUN_0033d270(0);
        *(undefined2 *)(param_1 + 0x47a) = 0;
      }
    }
    else if (*(short *)(param_1 + 0x47a) == 0) {
      FUN_0033d270(1);
      *(undefined2 *)(param_1 + 0x47a) = 1;
    }
  }
  uVar1 = uRam001da278;
  iVar5 = *(int *)(iRam001da274 + param_2);
  uVar4 = (uint)*(ushort *)(param_1 + 0x450);
  bVar8 = uVar4 == 0;
  if (bVar8) {
    uVar4 = *(uint *)(param_1 + 0x1d4);
  }
  uVar6 = *(undefined4 *)(iVar5 + 0x2c);
  uVar7 = *(undefined4 *)(iVar5 + 0x30);
  *(undefined4 *)(param_1 + 0x468) = *(undefined4 *)(iVar5 + 0x28);
  *(undefined4 *)(param_1 + 0x46c) = uVar6;
  *(undefined4 *)(param_1 + 0x470) = uVar7;
  *(undefined4 *)(param_1 + 0x464) = uVar1;
  FUN_0034c664(param_1,param_1 + 0x450,0,bVar8 && uVar4 == 3);
  if (*(int *)(param_1 + 0x3f4) != iRam001da27c) {
    FUN_00342714(*(float *)(param_1 + 0x438) + fRam001da284,param_2,param_1,param_1 + 0x450,
                 uRam001da288,uRam001da280);
  }
  return;
}

