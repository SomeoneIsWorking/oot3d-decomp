// OoT3D decomp @ 00296f14  name=FUN_00296f14  size=160

void FUN_00296f14(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_1c [3];
  undefined4 local_10;

  if (*(int *)(param_1 + 0x2e4) != DAT_00296fb4) {
    iVar1 = FUN_003695f8();
    uVar2 = DAT_00296fb8;
    if (iVar1 == 0) {
      uVar2 = DAT_00296fbc;
    }
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1b0) + 0xc) + 0xc) = uVar2;
    iVar1 = *(int *)(*(int *)(param_1 + 0x1b0) + 0x10);
    FUN_00331094(iVar1,0,0,local_1c);
    local_10 = *(undefined4 *)(param_1 + 0x2dc);
    FUN_003688a8(iVar1,0,0,local_1c);
    *(undefined1 *)(*(int *)(iVar1 + 4) + 10) = 1;
    local_1c[0] = 0;
    FUN_003334b4(param_1 + 0x1a4,param_1 + 0x148,0,0,param_1);
  }
  return;
}
