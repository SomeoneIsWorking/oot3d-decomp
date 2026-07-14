// OoT3D decomp @ 00190a20  name=FUN_00190a20  size=268

void FUN_00190a20(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_fpscr;
  undefined4 uVar4;
  
  iVar2 = FUN_003478bc(*(undefined4 *)(param_1 + 0x1ec),1);
  uVar1 = DAT_00190b2c;
  *(undefined4 *)(param_1 + 0xe48) = *(undefined4 *)(iVar2 + 0x1c);
  FUN_003478b0(uVar1,param_1 + 0x1c4);
  *(undefined1 *)(param_1 + 0xe74) = 0xd;
  iVar2 = DAT_00190b30;
  uVar4 = *(undefined4 *)(param_1 + 0x200);
  uVar3 = FUN_0036ae14(param_1 + 0x1c4,
                       *(undefined4 *)
                        (*(int *)(DAT_00190b30 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                        (uint)*(byte *)(param_1 + 0xe74) * 4));
  uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_00190b38,uVar4,uVar3,DAT_00190b34,param_1 + 0x1c4,
               *(undefined4 *)
                (*(int *)(iVar2 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                (uint)*(byte *)(param_1 + 0xe74) * 4),2);
  *(undefined4 *)(param_1 + 0xed8) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0xea8) = 0;
  uVar3 = DAT_00190b40;
  uVar1 = DAT_00190b3c;
  *(uint *)(param_1 + 0xe40) = *(uint *)(param_1 + 0xe40) | 7;
  *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) | 8;
  FUN_0037547c(DAT_00190b44,param_1 + 0x28,4,uVar3,uVar3,uVar1);
  *(undefined1 *)(param_1 + 0x100e) = 2;
  *(ushort *)(param_1 + 0x1010) = *(ushort *)(param_1 + 0x1010) & 0xfffe;
  return;
}

