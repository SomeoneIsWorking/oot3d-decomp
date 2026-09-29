// OoT3D decomp @ 0047fc94  name=FUN_0047fc94  size=144

undefined4 FUN_0047fc94(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;

  if (*param_1 != 0) {
    FUN_002d2e04(param_1);
    FUN_0048a5a8(*param_1,3);
    FUN_002d2d60(*param_1);
    *param_1 = 0;
  }
  uVar1 = param_2 + 3U & 0xfffffffc;
  if (uVar1 <= (uint)(param_2 + param_3)) {
    iVar2 = FUN_00485cc8(uVar1,(param_2 + param_3) - uVar1,0);
    *param_1 = iVar2;
    if ((iVar2 != 0) && (iVar2 = FUN_002d2d98(param_1), iVar2 != 0)) {
      return 1;
    }
  }
  return 0;
}
