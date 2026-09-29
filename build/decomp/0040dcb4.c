// OoT3D decomp @ 0040dcb4  name=FUN_0040dcb4  size=132

undefined4 FUN_0040dcb4(int param_1,undefined4 param_2,undefined4 *param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;

  puVar1 = *(uint **)(param_1 + 8);
  uVar2 = FUN_0030de24(param_2);
  uVar3 = *puVar1;
  uVar5 = 0;
  if (0 < (int)uVar3) {
    do {
      if (uVar5 < uVar3) {
        iVar6 = (int)puVar1 + puVar1[uVar5 * 2 + 2];
      }
      else {
        iVar6 = 0;
      }
      iVar4 = FUN_001000ec(param_2,iVar6 + 0xc,uVar2);
      if (iVar4 == 0) {
        *param_3 = *(undefined4 *)(iVar6 + 4);
        return 1;
      }
      uVar3 = *puVar1;
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (int)uVar3);
  }
  return 0;
}
