// OoT3D decomp @ 00209900  name=FUN_00209900  size=184

void FUN_00209900(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;

  uVar3 = 0;
  FUN_003510b0(param_1,DAT_002099b8);
  FUN_003532e8(param_1,1);
  FUN_00372f38(param_1,param_2,param_1 + 0x1c8,3,0,uVar3);
  uVar3 = FUN_00353fd4(param_1,param_2,1);
  uVar3 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar3);
  *(undefined4 *)(param_1 + 0x1a4) = uVar3;
  *(undefined2 *)(param_1 + 0x1c2) = 0x96;
  *(undefined1 *)(param_1 + 0x1c0) = 0;
  iVar2 = FUN_0036e864(param_2,(int)*(short *)(param_1 + 0x1c));
  if (iVar2 == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = 5;
  }
  *(undefined1 *)(param_1 + 0x1c1) = uVar1;
  *(undefined4 *)(param_1 + 0x1bc) = DAT_002099bc;
  return;
}
