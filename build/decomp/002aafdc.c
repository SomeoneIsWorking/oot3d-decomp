// OoT3D decomp @ 002aafdc  name=FUN_002aafdc  size=520

void FUN_002aafdc(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint in_fpscr;
  float fVar6;

  uVar5 = 0;
  if (*(short *)(param_2 + 0x104) != 0x51) {
    uVar3 = 2;
    uVar4 = uVar3;
    goto LAB_002ab184;
  }
  uVar2 = (uint)*(ushort *)(param_2 + 0x22b8);
  iVar1 = (int)*(short *)(*DAT_002ab1e4 + 0x110);
  fVar6 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
  if ((int)(DAT_002ab1e8 / fVar6 + DAT_002ab1ec) < (int)uVar2) {
    fVar6 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
    if ((int)(DAT_002ab1f0 / fVar6 + DAT_002ab1ec) < (int)uVar2) {
      fVar6 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
      if ((int)(DAT_002ab1f4 / fVar6 + DAT_002ab1ec) < (int)uVar2) {
        fVar6 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
        if ((int)uVar2 <= (int)(DAT_002ab1f8 / fVar6 + DAT_002ab1ec)) {
          uVar3 = 3;
          uVar4 = uVar3;
          goto LAB_002ab120;
        }
        fVar6 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
        if ((int)uVar2 <= (int)(DAT_002ab1fc / fVar6 + DAT_002ab1ec)) goto LAB_002ab0dc;
        fVar6 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
        if ((int)(DAT_002ab200 / fVar6 + DAT_002ab1ec) < (int)uVar2) goto LAB_002ab118;
      }
      uVar3 = 2;
      uVar4 = 2;
    }
    else {
LAB_002ab0dc:
      uVar3 = 1;
      uVar4 = 1;
    }
  }
  else {
LAB_002ab118:
    uVar3 = 6;
    uVar4 = 5;
  }
LAB_002ab120:
  if ((*(int *)(DAT_002ab204 + 0x4e8) == 6) ||
     ((fVar6 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3),
      (int)(DAT_002ab208 / fVar6 + DAT_002ab1ec) < (int)uVar2 &&
      (fVar6 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3),
      (int)uVar2 <= (int)(DAT_002ab20c / fVar6 + DAT_002ab1ec))))) {
    uVar5 = 3;
  }
  else {
    uVar5 = 2;
  }
LAB_002ab184:
  FUN_0035e3a4(param_1 + 0x28c,0,uVar3);
  FUN_0035e3a4(param_1 + 0x28c,2,uVar4);
  FUN_0035e3a4(param_1 + 0x28c,1,uVar5);
  FUN_0035e330(param_1 + 0x28c);
  FUN_0035e240(param_1 + 0x1b4,param_1 + 0x148,DAT_002ab214,DAT_002ab210,param_1,0);
  return;
}
