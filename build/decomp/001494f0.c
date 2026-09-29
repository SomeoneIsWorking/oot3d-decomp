// OoT3D decomp @ 001494f0  name=FUN_001494f0  size=56

undefined4 FUN_001494f0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;

  if (**(short **)(param_1 + 0x208) <= *(short *)(param_3 + 0x48)) {
    iVar1 = FUN_00377a50(1);
    if (iVar1 == 0xff) {
      uVar2 = 2;
    }
    else {
      uVar2 = 4;
    }
    return uVar2;
  }
  return 0;
}
