// OoT3D decomp @ 0014d428  name=FUN_0014d428  size=288

void FUN_0014d428(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint in_fpscr;
  undefined4 uVar3;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;

  if (((*(uint *)(DAT_0014d548 + 0x24) & 1) == 0) &&
     (iVar2 = FUN_003679b4(DAT_0014d54c), puVar1 = DAT_0014d554, uVar3 = DAT_0014d550, iVar2 != 0))
  {
    *DAT_0014d554 = DAT_0014d550;
    puVar1[1] = uVar3;
    puVar1[2] = uVar3;
  }
  FUN_00357fd0(*(undefined4 *)(DAT_0014d558 + param_2),*(undefined4 *)(param_1 + 0x178),
               param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x658) = DAT_0014d55c;
  uVar3 = VectorSignedToFloat((int)*(char *)(param_1 + 0x4ec),(byte)(in_fpscr >> 0x15) & 3);
  if (*DAT_0014d560 == 0) {
    *(undefined4 *)(param_1 + 0x654) = uVar3;
    FUN_003586ec(param_1 + 0x64c);
  }
  *(char *)(param_1 + 0x4ec) = '\x01' - *(char *)(param_1 + 0x4ec);
  FUN_00373bec(param_1 + 0x64c);
  if (*(int *)(param_1 + 0x4a0) == 3) {
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),0);
  }
  FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,DAT_0014d568,DAT_0014d564,param_1,0);
  local_20 = *(undefined4 *)(param_1 + 0x28);
  uStack_1c = *(undefined4 *)(param_1 + 0x2c);
  uStack_18 = *(undefined4 *)(param_1 + 0x30);
  FUN_00357878(param_1,&local_20,DAT_0014d554,0xff,param_2);
  return;
}
