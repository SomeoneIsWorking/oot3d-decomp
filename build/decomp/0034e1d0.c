// OoT3D decomp @ 0034e1d0  name=FUN_0034e1d0  size=160

void FUN_0034e1d0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  int iVar3;

  iVar3 = *(int *)(param_1 + 0x20ac);
  *(undefined2 *)(*DAT_0034e270 + 0x4d2) = 0;
  FUN_0036bc98(param_2,param_1);
  FUN_00371680(param_1,4,0);
  *(uint *)(iVar3 + 0x1714) = *(uint *)(iVar3 + 0x1714) & 0xdfffffff;
  FUN_00340a1c(param_1,1);
  FUN_0034be04(0x32);
  *(undefined1 *)(param_2 + 0x2f9) = 0;
  *(undefined4 *)(param_2 + 0x330) = 0;
  uVar1 = DAT_0034e274;
  *(undefined4 *)(param_2 + 0x368) = 0;
  FUN_0034e32c(uVar1,param_2,param_1);
  uVar2 = FUN_00372b50(param_2);
  *(undefined2 *)(DAT_0034e278 + param_2) = uVar2;
  *(undefined2 *)(param_2 + 0x2a0) = 0;
  return;
}
