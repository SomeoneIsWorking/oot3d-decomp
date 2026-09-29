// OoT3D decomp @ 00262c60  name=FUN_00262c60  size=208

void FUN_00262c60(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  undefined1 auStack_2c [12];
  float local_20;

  FUN_00373bec(*(undefined4 *)(param_1 + 0x2c0));
  fVar1 = DAT_00262d30;
  iVar2 = 0;
  if (0 < *(int *)(**(int **)(*(int *)(param_1 + 0x2b4) + 8) + 8)) {
    do {
      iVar4 = *(int *)(*(int *)(param_1 + 0x2a8) + 0x10);
      FUN_00333abc(iVar4,iVar2,auStack_2c);
      local_20 = (float)VectorUnsignedToFloat
                                  ((uint)*(byte *)(param_1 + 0x289),(byte)(in_fpscr >> 0x15) & 3);
      local_20 = local_20 * fVar1;
      FUN_00333a38(iVar4,iVar2,auStack_2c);
      iVar3 = iVar2 + 1;
      *(undefined1 *)(*(int *)(iVar4 + 4) + iVar2 * 0x124) = 1;
      iVar2 = iVar3;
    } while (iVar3 < *(int *)(**(int **)(*(int *)(param_1 + 0x2b4) + 8) + 8));
  }
  *(undefined1 *)(*(int *)(param_1 + 0x2a8) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x2a8),param_1 + 0x148);
  FUN_00372170(*(undefined4 *)(param_1 + 0x2a8),0);
  return;
}
