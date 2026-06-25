// OoT3D decomp @ 002c3fac  name=FUN_002c3fac  size=316

undefined4 FUN_002c3fac(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  float fVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  
  fVar2 = DAT_002c40ec;
  uVar1 = DAT_002c40e8;
  if ((*(uint *)(param_1 + 0x29b8) & 4) != 0) {
    *(uint *)(param_1 + 0x29b8) = *(uint *)(param_1 + 0x29b8) & 0xfffffffb;
    if ((*(ushort *)(param_1 + 0x90) & 1) == 0) {
      *(undefined *)(param_1 + 0x1b8) = *(undefined *)(param_1 + 0x1a7);
    }
    else {
      FUN_00334c44(param_1);
      uVar4 = FUN_003603c0(param_1 + 0x254,500);
      uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00360190(uVar1,fVar2,uVar4,fVar2,param_1 + 0x254,param_2,500,2);
      uVar3 = FUN_003603c0(param_1 + 0x254,500);
      *(undefined2 *)(param_1 + 0x2238) = uVar3;
    }
  }
  if (*(int *)(param_1 + 0x284) != 500) {
    return 0;
  }
  if (*(short *)(param_1 + 0x2238) != 0) {
    *(short *)(param_1 + 0x2238) = *(short *)(param_1 + 0x2238) + -1;
  }
  iVar5 = FUN_003603c0(param_1 + 0x254,500);
  uVar4 = DAT_002c40f0;
  if (10 < iVar5 - *(short *)(param_1 + 0x2238)) {
    *(undefined *)(param_1 + 0x1b8) = *(undefined *)(param_1 + 0x1a7);
  }
  iVar5 = FUN_0036e5e0(uVar4,uVar1,param_1 + 0x254);
  if (iVar5 != 0) {
    FUN_0034bd3c(param_1);
  }
  fVar6 = *(float *)(param_1 + 0x29cc);
  if ((fVar6 != fVar2 && fVar6 < fVar2 == (NAN(fVar6) || NAN(fVar2))) &&
     (DAT_002c40f4 < *(int *)(param_1 + 0x290))) {
    *(undefined2 *)(param_1 + 0x2238) = 0;
  }
  return 1;
}

