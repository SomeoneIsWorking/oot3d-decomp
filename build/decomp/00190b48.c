// OoT3D decomp @ 00190b48  name=FUN_00190b48  size=200

void FUN_00190b48(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;
  
  *(undefined1 *)(param_1 + 0xe74) = 3;
  *(undefined1 *)(param_1 + 0x100e) = 3;
  *(ushort *)(param_1 + 0x1010) = *(ushort *)(param_1 + 0x1010) & 0xfffb;
  *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) & 0xfffff7ff;
  *(undefined4 *)(param_1 + 0xe80) = *(undefined4 *)(param_1 + 0xe8c);
  *(undefined4 *)(param_1 + 0xe84) = *(undefined4 *)(param_1 + 0xe90);
  *(undefined4 *)(param_1 + 0xe88) = *(undefined4 *)(param_1 + 0xe94);
  if ((*(uint *)(param_1 + 0xe54) & 0x8000000) != 0) {
    FUN_0037547c(DAT_00190c18,param_1 + 0xe80,4,DAT_00190c14,DAT_00190c14,DAT_00190c10);
  }
  iVar1 = DAT_00190c1c;
  uVar2 = FUN_0036ae14(param_1 + 0x1c4,
                       *(undefined4 *)
                        (*(int *)(DAT_00190c1c + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                        (uint)*(byte *)(param_1 + 0xe74) * 4));
  uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_00190c28,DAT_00190c24,uVar2,DAT_00190c20,param_1 + 0x1c4,
               *(undefined4 *)
                (*(int *)(iVar1 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                (uint)*(byte *)(param_1 + 0xe74) * 4),2);
  return;
}

