// OoT3D decomp @ 00357d6c  name=FUN_00357d6c  size=276

void FUN_00357d6c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;
  undefined4 uVar3;

  *(undefined1 *)(param_1 + 0x1a4) = 5;
  *(undefined1 *)(param_1 + 0xe74) = 0;
  *(undefined1 *)(param_1 + 0xec4) = 0;
  uVar2 = DAT_00357e8c;
  uVar3 = DAT_00357e88;
  if ((((DAT_00357e80 < *(int *)(param_1 + 0xe78)) && (*(char *)(param_1 + 0x1b0) == '\0')) ||
      ((DAT_00357e84 < *(int *)(param_1 + 0xe78) && (*(char *)(param_1 + 0x1b0) == '\x01')))) &&
     ((*(uint *)(param_1 + 0xe54) & 0x1000) == 0)) {
    *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) | 0x1000;
    FUN_0037547c(DAT_00357e90,param_1 + 0x28,4,uVar2,uVar2,uVar3);
  }
  iVar1 = DAT_00357e94;
  uVar3 = *(undefined4 *)(param_1 + 0x200);
  if (*(int *)(*(int *)(DAT_00357e94 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
              (uint)*(byte *)(param_1 + 0xe74) * 4) != *(int *)(param_1 + 500)) {
    uVar2 = FUN_0036ae14(param_1 + 0x1c4);
    uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_00357e9c,uVar3,uVar2,DAT_00357e98,param_1 + 0x1c4,
                 *(undefined4 *)
                  (*(int *)(iVar1 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                  (uint)*(byte *)(param_1 + 0xe74) * 4),2);
    return;
  }
  return;
}
