// OoT3D decomp @ 001d6024  name=FUN_001d6024  size=924

void FUN_001d6024(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;

  iVar7 = *(int *)(DAT_001d63c0 + param_2);
  FUN_00349008(param_1);
  iVar6 = param_2 + 0x5c78;
  FUN_003762a4(param_2,iVar6,param_1 + 0x1a4);
  FUN_003762a4(param_2,iVar6,param_1 + 0x1fc);
  FUN_003762a4(param_2,iVar6,param_1 + 0x254);
  FUN_00376864(param_1);
  uVar1 = DAT_001d63c4;
  FUN_00376340(DAT_001d63c4,DAT_001d63c4,DAT_001d63c4,param_2,param_1,4);
  iVar6 = FUN_00370734(param_1 + 0x314);
  uVar2 = DAT_001d63c8;
  if (iVar6 != 0) {
    if (*(int *)(param_1 + 0x344) == 0) {
      FUN_00375bcc(param_1,DAT_001d63cc);
      uVar4 = FUN_0036ae14(param_1 + 0x314,1);
      uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(uVar2,uVar1,uVar4,uVar2,param_1 + 0x314,1,2);
    }
    else {
      uVar4 = FUN_0036ae14(param_1 + 0x314,0);
      uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(uVar2,uVar1,uVar4,uVar2,param_1 + 0x314,0);
    }
  }
  (**(code **)(param_1 + 0x7b8))(param_1,param_2);
  if (*(int *)(param_1 + 0x98) < DAT_001d63d0) {
    iVar6 = FUN_003758b0(*(float *)(iVar7 + 0x30) - *(float *)(param_1 + 0x30),
                         *(float *)(iVar7 + 0x28) - *(float *)(param_1 + 0x28));
    fVar9 = *(float *)(iVar7 + 0x28) - *(float *)(param_1 + 0x28);
    fVar8 = *(float *)(iVar7 + 0x30) - *(float *)(param_1 + 0x30);
    if (iVar6 < 0) {
      iVar6 = FUN_003758b0(fVar8,fVar9);
      iVar6 = -iVar6;
    }
    else {
      iVar6 = FUN_003758b0(fVar8,fVar9);
    }
    if (0xbfff < iVar6) goto LAB_001d6250;
    fVar9 = *(float *)(iVar7 + 0x3c) - *(float *)(param_1 + 0x3c);
    fVar8 = *(float *)(iVar7 + 0x44) - *(float *)(param_1 + 0x44);
    iVar5 = FUN_003758b0(SQRT(fVar9 * fVar9 + fVar8 * fVar8),
                         *(float *)(param_1 + 0x40) - *(float *)(iVar7 + 0x40));
    sVar3 = FUN_003758b0(*(float *)(iVar7 + 0x44) - *(float *)(param_1 + 0x44),
                         *(float *)(iVar7 + 0x3c) - *(float *)(param_1 + 0x3c));
    iVar7 = iVar5;
    if (0x1000 < iVar5) {
      iVar7 = 0x1000;
    }
    iVar6 = (int)(short)(sVar3 - *(short *)(param_1 + 0xbe));
    if ((iVar5 < 0x1001) && (iVar7 < -0x1000)) {
      iVar7 = DAT_001d63d4;
    }
    if (iVar6 < 0x2501) {
      if (iVar6 < -0x2500) {
        iVar6 = DAT_001d63d8;
      }
    }
    else {
      iVar6 = 0x2500;
    }
  }
  else {
LAB_001d6250:
    iVar7 = 0;
    iVar6 = 0;
  }
  FUN_00375a18(param_1 + 0x7a8,iVar7,10,200,10);
  FUN_00375a18(param_1 + 0x7aa,iVar6,10,200,10);
  if (*(short *)(param_1 + 0x1c) != 2) {
    return;
  }
  iVar6 = FUN_0036e864(param_2,0x3e);
  iVar7 = param_2 + 0x208c;
  if (iVar6 != 0) {
    if (*(char *)(param_1 + 0x7b4) == '\0') goto LAB_001d6348;
    *(char *)(param_1 + 0x7b4) = *(char *)(param_1 + 0x7b4) + -1;
  }
  if (*(char *)(param_1 + 0x7b4) == '\x01') {
    z_actor_003738d0(DAT_001d63e4,DAT_001d63e0,DAT_001d63dc,iVar7,param_2,DAT_001d63e8,0,0,0,0x3dc1,
                     1);
    z_actor_003738d0(DAT_001d63f8,DAT_001d63f4,DAT_001d63f0,iVar7,param_2,DAT_001d63fc,0,0,4,
                     DAT_001d63ec,1);
  }
LAB_001d6348:
  iVar6 = FUN_0036e864(param_2,0x3d);
  if (iVar6 != 0) {
    if (*(char *)(param_1 + 0x7b5) == '\0') {
      return;
    }
    *(char *)(param_1 + 0x7b5) = *(char *)(param_1 + 0x7b5) + -1;
  }
  if (*(char *)(param_1 + 0x7b5) == '\x01') {
    z_actor_003738d0(DAT_001d640c,DAT_001d6408,DAT_001d6404,iVar7,param_2,DAT_001d6410,0,0,0,
                     DAT_001d6400,1);
  }
  return;
}
