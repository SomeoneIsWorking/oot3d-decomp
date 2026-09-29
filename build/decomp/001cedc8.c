// OoT3D decomp @ 001cedc8  name=FUN_001cedc8  size=172

void FUN_001cedc8(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;

  uVar1 = FUN_00344a64();
  if ((uVar1 & 1) == 0) {
    if ((uVar1 & 2) == 0) {
      return;
    }
    FUN_00344930(param_1,3);
    uVar3 = DAT_001cee78;
    uVar4 = DAT_001cee74;
    *(undefined4 *)(param_1 + 400) = 5;
    uVar2 = DAT_001cee80;
  }
  else {
    *(uint *)(param_1 + 0x128) = (uint)*(byte *)(*(int *)(param_1 + 300) + param_1 + 0x13c);
    *(int *)(param_1 + 0x138) = *(int *)(param_1 + 300);
    FUN_00344930(param_1,1);
    uVar3 = DAT_001cee78;
    uVar4 = DAT_001cee74;
    *(int *)(param_1 + 400) = *(int *)(param_1 + 300) - *(int *)(param_1 + 0x130);
    uVar2 = DAT_001cee7c;
  }
  FUN_0037547c(uVar2,0,4,uVar3,uVar3,uVar4);
  return;
}
