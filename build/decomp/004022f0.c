// OoT3D decomp @ 004022f0  name=FUN_004022f0  size=96

int FUN_004022f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  code *pcVar2;

  pcVar2 = *(code **)(**(int **)(param_1 + 0x34) + 0xc);
  (*pcVar2)(*(int **)(param_1 + 0x34),pcVar2,*(undefined4 *)(param_1 + 0x18),0,0);
  iVar1 = (**(code **)(**(int **)(param_1 + 0x34) + 0x2c))
                    (*(int **)(param_1 + 0x34),param_2,param_3);
  if (0 < iVar1) {
    FUN_00402274(param_1 + 0x14,iVar1);
  }
  return iVar1;
}
