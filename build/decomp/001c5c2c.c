// OoT3D decomp @ 001c5c2c  name=FUN_001c5c2c  size=268

void FUN_001c5c2c(int param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  undefined4 uVar5;
  float fVar6;

  FUN_003731e0(param_1 + 0x1a4);
  FUN_00370378(param_1 + 0xbc,0,0x400);
  iVar1 = DAT_001c5d40;
  iVar3 = *(int *)(DAT_001c5d38 + 0x30);
  *(float *)(param_1 + 0x2c) = *(float *)(iVar3 + 0x2c) + DAT_001c5d3c;
  if (*(int *)(iVar3 + 0x22c) == iVar1) {
    *(undefined1 *)(param_1 + 0x232) = 3;
    fVar4 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
    fVar2 = DAT_001c5d44;
    fVar6 = (float)VectorSignedToFloat((int)*(char *)(param_1 + 0x230),(byte)(in_fpscr >> 0x15) & 3)
    ;
    *(float *)(param_1 + 0x12d4) = *(float *)(param_1 + 0x28) + fVar4 * DAT_001c5d44 * fVar6;
    fVar4 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
    uVar5 = DAT_001c5d48;
    fVar6 = (float)VectorSignedToFloat((int)*(char *)(param_1 + 0x230),(byte)(in_fpscr >> 0x15) & 3)
    ;
    *(float *)(param_1 + 0x12dc) = *(float *)(param_1 + 0x30) - fVar4 * fVar2 * fVar6;
    *(undefined4 *)(param_1 + 0x12d8) = *(undefined4 *)(param_1 + 0x2c);
    *(short *)(param_1 + 0x12f2) = (short)uVar5;
    *(undefined1 *)(param_1 + 0x12f8) = 0xfe;
    *(undefined2 *)(param_1 + 0x12f6) = 6;
    iVar1 = DAT_001c5d54;
    uVar5 = DAT_001c5d4c;
    if (*(short *)(param_1 + 0x1c) == 0) {
      uVar5 = DAT_001c5d50;
    }
    *(undefined4 *)(param_1 + 0x12fc) = uVar5;
    *(undefined2 *)(iVar1 + param_1) = 0xffff;
    *(undefined4 *)(param_1 + 200) = 0;
    *(undefined2 *)(param_1 + 0x234) = 0xb4;
    *(undefined4 *)(param_1 + 0x22c) = DAT_001c5d58;
  }
  return;
}
