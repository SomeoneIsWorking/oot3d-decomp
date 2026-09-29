// OoT3D decomp @ 00367640  name=FUN_00367640  size=164

void FUN_00367640(int param_1)

{
  int iVar1;
  undefined4 uVar2;

  uVar2 = DAT_003676e4;
  if ((*(ushort *)(param_1 + 0x1c) & 0x1f) == 2) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    FUN_003717ac(param_1 + 0x1a4,uVar2,10);
    uVar2 = DAT_003676e8;
  }
  else {
    FUN_003717ac(param_1 + 0x1a4,DAT_003676e4,1);
    uVar2 = DAT_003676ec;
  }
  iVar1 = DAT_003676f4;
  *(undefined4 *)(param_1 + 0x1e4) = uVar2;
  uVar2 = *(undefined4 *)(param_1 + 0x1e8);
  *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_1 + 0x1ec);
  *(undefined4 *)(param_1 + 0x1ec) = uVar2;
  *(float *)(param_1 + 0x1e0) = *(float *)(param_1 + 0x1e0) - DAT_003676f0;
  *(undefined2 *)(iVar1 + param_1) = 1;
  *(undefined1 *)(param_1 + 0xc49) = 0;
  *(undefined1 *)(param_1 + 0xc47) = 0;
  *(undefined4 *)(param_1 + 0xbbc) = DAT_003676f8;
  return;
}
