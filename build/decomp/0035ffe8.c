// OoT3D decomp @ 0035ffe8  name=FUN_0035ffe8  size=148

void FUN_0035ffe8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;

  iVar2 = FUN_0036e864(param_2,((uint)*(ushort *)(param_1 + 0x1c) << 0x12) >> 0x1a,param_3,param_4,
                       param_4);
  if (iVar2 == 0) {
    uVar1 = *(ushort *)(param_1 + 0x1c);
    FUN_00375c10(param_2,((uint)uVar1 << 0x12) >> 0x1a);
    if ((uVar1 & 0xff) == 0 || (uVar1 & 0xff) == 4) {
      FUN_00372244(param_2 + 0x5fcc,0x1e,DAT_0036007c);
    }
    else {
      FUN_00372244(param_2 + 0x5fcc,0x1e,DAT_00360080);
    }
    FUN_0036a2dc(param_2,param_1,0,0,0);
  }
  return;
}
