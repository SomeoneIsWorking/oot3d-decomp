// OoT3D decomp @ 004522c4  name=FUN_004522c4  size=132

undefined4 FUN_004522c4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;

  iVar4 = 0;
  uVar3 = 1;
  do {
    for (iVar2 = *(int *)(param_2 + iVar4 * 8 + 0x10); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x130))
    {
      iVar1 = FUN_00373074(param_1 + 0x3a58,(int)*(char *)(iVar2 + 0x1e));
      if (iVar1 == 0) {
        uVar3 = 0;
      }
      else if (*(code **)(iVar2 + 0x134) != (code *)0x0) {
        (**(code **)(iVar2 + 0x134))(iVar2,param_1);
        *(undefined4 *)(iVar2 + 0x134) = 0;
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0xc);
  return uVar3;
}
