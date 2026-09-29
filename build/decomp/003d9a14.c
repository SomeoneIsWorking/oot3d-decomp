// OoT3D decomp @ 003d9a14  name=FUN_003d9a14  size=152

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x003d9a78) */
/* WARNING: Removing unreachable block (ram,0x003d9a7c) */
/* WARNING: Removing unreachable block (ram,0x003d9a80) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_003d9a14(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;

  fVar3 = fRam003d9a78;
  if (*(short *)(param_1 + 0x1c2) != 0) {
    *(short *)(param_1 + 0x1c2) = *(short *)(param_1 + 0x1c2) + -1;
  }
  fVar2 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1c2),(byte)(in_fpscr >> 0x15) & 3);
  fVar3 = (float)FUN_00372674(fVar2 * fVar3);
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) - fVar3 * fRam003d9a7c;
  uVar1 = DAT_003d9a80;
  if (*(short *)(param_1 + 0x1c2) != 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xefc7ffff;
    *(undefined4 *)(param_1 + 0x24) = uVar1;
    return;
  }
  *(undefined2 *)(param_1 + 0x1c2) = 0x5a;
  FUN_00375bcc(param_1,DAT_001805a0);
  *(undefined4 *)(param_1 + 0x1bc) = DAT_001805a4;
  return;
}
