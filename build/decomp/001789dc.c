// OoT3D decomp @ 001789dc  name=FUN_001789dc  size=156

void FUN_001789dc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;

  iVar2 = *(int *)(DAT_00178a78 + param_2);
  iVar1 = FUN_00370734(param_1 + 0x294);
  if (iVar1 != 0) {
    FUN_00350248(param_1,*(undefined4 *)(param_1 + 0x230),param_1 + 0x230);
  }
  *(uint *)(param_1 + 0x290) = *(uint *)(param_1 + 0x290) | 1;
  *(undefined4 *)(param_1 + 0x280) = *(undefined4 *)(iVar2 + 0x3c);
  *(undefined4 *)(param_1 + 0x284) = *(undefined4 *)(iVar2 + 0x40);
  *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(iVar2 + 0x44);
  FUN_0034c664(param_1,param_1 + 0x268,0,4);
  if (*(int *)(param_1 + 0x200) == 0) {
    FUN_00350248(param_1,0,param_1 + 0x230);
    *(undefined4 *)(param_1 + 0x1a4) = DAT_00178a7c;
    *(uint *)(param_1 + 0x290) = *(uint *)(param_1 + 0x290) & 0xfffffffe;
  }
  return;
}
