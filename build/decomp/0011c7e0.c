// OoT3D decomp @ 0011c7e0  name=FUN_0011c7e0  size=488

void FUN_0011c7e0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  uint in_fpscr;
  int iVar8;
  float fVar9;
  float fVar10;
  float local_20;
  undefined4 local_1c;
  float local_18;

  uVar2 = DAT_0011c9c8;
  iVar5 = FUN_003736fc(DAT_0011c9cc,DAT_0011c9c8,param_1 + 0x1a4);
  if (iVar5 == 0) {
    iVar5 = FUN_003736fc(DAT_0011c9d4,uVar2,param_1 + 0x1a4);
    if (iVar5 != 0) {
      fVar9 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0xbe) + 0x6a4));
      fVar3 = DAT_0011c9d8;
      local_20 = *(float *)(param_1 + 0x28) + fVar9 * DAT_0011c9d8;
      fVar9 = (float)FUN_00338f60((int)(short)(*(short *)(param_1 + 0xbe) + 0x6a4));
      local_18 = *(float *)(param_1 + 0x30) + fVar9 * fVar3;
      local_1c = *(undefined4 *)(param_1 + 0x2c);
      FUN_00375bcc(param_1,DAT_0011c9dc);
      FUN_0036627c(param_2 + 0x364,2,0x19,5);
      FUN_003661a8(param_2,&local_20,8);
    }
  }
  else {
    FUN_00375bcc(param_1,DAT_0011c9d0);
  }
  iVar8 = *(int *)(param_1 + 0x1e0);
  iVar5 = DAT_0011c9e0;
  if ((DAT_0011c9e0 < iVar8) && (iVar5 = DAT_0011c9e0 + 0x300000, iVar8 < iVar5)) {
    *(undefined1 *)(param_1 + 0xe12) = 1;
  }
  else {
    bVar7 = *(char *)(param_1 + 0xe0f) != '\0';
    iVar1 = 0;
    if (bVar7) {
      iVar1 = iVar8;
      iVar5 = DAT_0011c9e4;
    }
    if (bVar7 && iVar1 < iVar5) {
      local_20 = 0.0;
      FUN_00375a18(param_1 + 0x36,(int)*(short *)(param_1 + 0x92),1,DAT_0011c9e8);
      *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
    }
    *(undefined1 *)(param_1 + 0xe12) = 0;
  }
  iVar5 = FUN_003731e0(param_1 + 0x1a4);
  if (iVar5 != 0) {
    uVar6 = FUN_0036ae14(param_1 + 0x1a4,2);
    uVar4 = DAT_0011c9fc;
    uVar2 = DAT_0011c9f8;
    fVar3 = DAT_0011c9ec;
    fVar9 = (float)VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
    if (fVar9 <= DAT_0011c9ec) {
      fVar10 = fVar9 * DAT_0011c9f0 * DAT_0011c9f4 - DAT_0011c9f4;
    }
    else {
      fVar10 = DAT_0011c9f4 + fVar9 * DAT_0011c9f0 * DAT_0011c9f4;
    }
    *(char *)(param_1 + 0xe0d) = (char)(int)fVar10;
    *(undefined1 *)(param_1 + 0xe0c) = 7;
    *(undefined1 *)(param_1 + 0xe12) = 0;
    *(undefined1 *)(param_1 + 0xe13) = 0;
    FUN_00375c08(uVar4,fVar3,fVar9,uVar2,param_1 + 0x1a4,2,0);
    FUN_00375bcc(param_1,DAT_0011ca00);
    *(undefined4 *)(param_1 + 0xe1c) = DAT_0011ca04;
  }
  return;
}
