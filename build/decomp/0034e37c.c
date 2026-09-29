// OoT3D decomp @ 0034e37c  name=FUN_0034e37c  size=148

void FUN_0034e37c(int param_1,int param_2)

{
  int iVar1;

  iVar1 = *(int *)(param_1 + 0x20ac);
  FUN_003724dc(DAT_0034e410,DAT_0034e410,param_2,param_1,
               *(undefined4 *)
                (*(int *)(param_2 + (uint)*(byte *)(param_2 + 0x2fa) * 4 + 0x2a4) + 0x1b8));
  FUN_00371680(param_1,4,0);
  *(uint *)(iVar1 + 0x1714) = *(uint *)(iVar1 + 0x1714) & 0xdfffffff;
  FUN_00340a1c(param_1,1);
  FUN_0034be04(0x32);
  *(undefined1 *)(param_2 + 0x2f9) = 0;
  FUN_0034e32c(DAT_0034e414,param_2,param_1);
  *(undefined2 *)(param_2 + 0x2a0) = 0xf;
  return;
}
