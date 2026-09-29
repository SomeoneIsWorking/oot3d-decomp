// OoT3D decomp @ 001617e0  name=FUN_001617e0  size=52

undefined4 FUN_001617e0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;

  uVar1 = 0;
  if (**(short **)(param_1 + 0x208) <= *(short *)(param_3 + 0x48)) {
    iVar2 = FUN_00377a50(0);
    if (iVar2 == 0xff) {
      uVar1 = 2;
    }
    else {
      uVar1 = 4;
    }
  }
  return uVar1;
}
