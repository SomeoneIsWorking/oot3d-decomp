// OoT3D decomp @ 0038ac64  name=FUN_0038ac64  size=128

void FUN_0038ac64(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;

  uVar1 = 2;
  if (*(short *)(param_2 + 0x104) == 0x53) {
    uVar1 = 0;
  }
  iVar2 = FUN_0032d8e8(param_1,param_2,1,0,uVar1,0,100);
  if (iVar2 != 0) {
    FUN_003666a0(param_2);
    *(undefined1 *)(param_2 + 0x325f) = 2;
    *(undefined1 *)(param_2 + 0x326e) = 0;
    *(undefined4 *)(param_1 + 0x1a4) = DAT_0038ace4;
  }
  return;
}
