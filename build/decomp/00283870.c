// OoT3D decomp @ 00283870  name=FUN_00283870  size=168

void FUN_00283870(int param_1)

{
  ushort uVar1;

  *(undefined1 *)(param_1 + 0x1b0) = 0;
  *(ushort *)(iRam00283918 + param_1) = *(ushort *)(param_1 + 0x1c) >> 8;
  uVar1 = *(ushort *)(param_1 + 0x1c) & 0xff;
  *(ushort *)(param_1 + 0x1c) = uVar1;
  if (uVar1 < 0xf8) {
    if (uVar1 == 0xf7) {
      FUN_0033c7a4(4);
    }
    else if ((uVar1 != 0xc) ||
            (((*(uint *)(iRam00283920 + 0x30) & *(uint *)(iRam0028391c + 0xbc)) != 0 &&
             ((*(uint *)(iRam0028391c + 0xbc) & *(uint *)(iRam00283920 + 0x38)) == 0)))) {
      return;
    }
  }
  else {
    func_0x00285f50(uVar1 - 0xf8 & 0xff);
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  return;
}
