// OoT3D decomp @ 003e2080  name=FUN_003e2080  size=328

void FUN_003e2080(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;

  FUN_00370734(param_1 + 0x1a4);
  if (*(short *)(param_1 + 0x7e0) != 0) {
    *(short *)(param_1 + 0x7e0) = *(short *)(param_1 + 0x7e0) + -1;
  }
  fVar1 = DAT_003e220c;
  fVar4 = *(float *)(param_1 + 0x1e0);
  FUN_00373500(*(float *)(param_1 + 0x84) + DAT_003e2210,DAT_003e2214,
               *(undefined4 *)(param_1 + 0x6c),param_1 + 0x7e8);
  fVar3 = (float)FUN_00372674((fVar4 - fVar1) * DAT_003e2218);
  iVar2 = DAT_003e221c;
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x7e8) - fVar3 * fVar1;
  if (iVar2 < (int)fVar4) {
    FUN_003705a0(DAT_003e2228,DAT_003e2220,param_1 + 0x6c);
  }
  else {
    FUN_003705a0(DAT_003e2224,DAT_003e2220,param_1 + 0x6c);
  }
  if ((*(ushort *)(param_1 + 0x90) & 8) != 0) {
    *(undefined2 *)(param_1 + 0x7e2) = *(undefined2 *)(param_1 + 0x82);
  }
  iVar2 = FUN_00370378(param_1 + 0x36,(int)*(short *)(param_1 + 0x7e2),0xb6);
  if (iVar2 != 0) {
    if (*(short *)(param_1 + 0x7e0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + 0x100;
  }
  if (((*(short *)(param_1 + 0x7e0) == 0) && (*(float *)(param_1 + 0x9c) < DAT_003e2230)) &&
     (*(int *)(param_1 + 0x98) < DAT_003e2234)) {
    *(undefined4 *)(param_1 + 0x7dc) = DAT_003e2238;
  }
  FUN_00373264(param_1,DAT_003e223c);
  return;
}
