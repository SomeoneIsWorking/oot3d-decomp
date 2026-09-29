// OoT3D decomp @ 00284f40  name=FUN_00284f40  size=132

void FUN_00284f40(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  ushort uVar3;

  *(ushort *)(param_1 + 0x1a8) = *(ushort *)(param_1 + 0x1c) >> 0xb;
  *(ushort *)(param_1 + 0x1aa) = (ushort)(((uint)*(ushort *)(param_1 + 0x1c) << 0x15) >> 0x1b);
  uVar3 = *(ushort *)(param_1 + 0x1c) & 0x3f;
  *(ushort *)(param_1 + 0x1ac) = uVar3;
  if (uVar3 == 0x3f) {
    *(undefined2 *)(param_1 + 0x1ac) = 0xffff;
  }
  *(undefined1 *)(param_1 + 0x1f) = 1;
  if ((-1 < *(short *)(param_1 + 0x1ac)) && (iVar2 = FUN_0036e864(param_2), iVar2 != 0)) {
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(undefined4 *)(param_1 + 0x13c) = 0;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    return;
  }
  uVar1 = DAT_00284fc8;
  *(undefined4 *)(param_1 + 0x1b4) = DAT_00284fc4;
  *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  return;
}
