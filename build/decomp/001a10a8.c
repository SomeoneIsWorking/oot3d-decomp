// OoT3D decomp @ 001a10a8  name=FUN_001a10a8  size=272

void FUN_001a10a8(int param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined2 uVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;

  iVar7 = *(int *)(DAT_001a11b8 + param_2);
  FUN_003731e0(param_1 + 0x1a4);
  fVar4 = DAT_001a11c4;
  fVar3 = DAT_001a11bc;
  *(float *)(param_1 + 0x988) = DAT_001a11bc;
  *(float *)(param_1 + 0x980) = fVar3;
  *(float *)(param_1 + 0x984) = *(float *)(param_1 + 0x984) + *(float *)(param_1 + 0x9b4);
  fVar8 = *(float *)(param_1 + 0x9b4) - DAT_001a11c0;
  *(float *)(param_1 + 0x9b4) = fVar8;
  fVar5 = DAT_001a11d0;
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar8 == fVar3) << 0x1e | (uint)(fVar3 <= fVar8) << 0x1d;
  bVar2 = (byte)(uVar1 >> 0x18);
  if (!(bool)(bVar2 >> 5 & 1) || (bool)(bVar2 >> 6)) {
    *(undefined4 *)(param_1 + 0x9cc) = DAT_001a11c8;
    fVar8 = (float)VectorSignedToFloat((int)*(short *)(*DAT_001a11cc + 0x110),
                                       (byte)(uVar1 >> 0x15) & 3);
    *(short *)(param_1 + 0x9b0) = (short)(int)(fVar5 / fVar8 + DAT_001a11d4);
    *(undefined2 *)(param_1 + 0x9ae) = 0;
    *(float *)(param_1 + 0x9b8) = fVar4;
    *(float *)(param_1 + 0x9b4) = fVar3;
  }
  FUN_00360f54(param_1,iVar7 + 0x2340);
  FUN_0037572c((fVar4 - DAT_001a11d8 * *(float *)(param_1 + 0x9b4) * *(float *)(param_1 + 0x9b4)) *
               DAT_001a11dc,param_1);
  uVar6 = FUN_003758b0(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x60));
  *(undefined2 *)(param_1 + 0x9bc) = uVar6;
  FUN_003612fc(param_1,param_2,0x20);
  FUN_00375bcc(param_1,DAT_001a11e0);
  return;
}
