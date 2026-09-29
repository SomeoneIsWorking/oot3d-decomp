// OoT3D decomp @ 003112ac  name=FUN_003112ac  size=176

void FUN_003112ac(undefined4 param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint *puVar5;

  puVar5 = (uint *)*DAT_0031135c;
  for (iVar1 = *(int *)(*DAT_00311360 + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x44)) {
    if (param_4 <= *(uint *)(iVar1 + 0x40)) {
      if (iVar1 != 0 && *(uint *)(iVar1 + 0x40) != param_4) {
        iVar1 = 0;
      }
      break;
    }
  }
  if (param_2 != 0x821a) {
    iVar3 = 0;
    if (param_2 == 0x8ce0) goto LAB_0031131c;
    if (param_2 != 0x8d00) {
      return;
    }
  }
  iVar3 = 1;
LAB_0031131c:
  puVar4 = (undefined4 *)(*(int *)(*DAT_00311360 + 8) + iVar3 * 0x10);
  iVar3 = iVar1;
  if (param_4 == 0) {
    iVar3 = 0;
  }
  puVar4[3] = iVar3;
  if (param_4 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0x40);
  }
  puVar4[1] = uVar2;
  *puVar4 = 0;
  puVar4[2] = 0;
  *puVar5 = *puVar5 | 1;
  return;
}
