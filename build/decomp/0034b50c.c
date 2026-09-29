// OoT3D decomp @ 0034b50c  name=FUN_0034b50c  size=120

void FUN_0034b50c(int param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint in_fpscr;
  undefined4 uVar4;

  uVar1 = DAT_0034b584;
  puVar3 = (undefined4 *)(DAT_0034b588 + param_2 * 0x10);
  uVar4 = DAT_0034b584;
  if ((-1 < *param_3) && (*param_3 != param_2)) {
    uVar4 = puVar3[3];
  }
  uVar2 = FUN_0036ae14(param_1 + 0x1a4,*puVar3);
  uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_0034b58c,uVar1,uVar2,uVar4,param_1 + 0x1a4,*puVar3,*(undefined1 *)(puVar3 + 2));
  *param_3 = param_2;
  return;
}
