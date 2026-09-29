// OoT3D decomp @ 002c14a8  name=FUN_002c14a8  size=96

void FUN_002c14a8(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;

  if (param_1 == 0x8892) {
    iVar1 = *(int *)(*DAT_002c1508 + 0x808);
  }
  else {
    if (param_1 != 0x8893) {
      return;
    }
    iVar1 = *(int *)(*DAT_002c1508 + 0x80c);
  }
  puVar2 = *(undefined4 **)(iVar1 + 8);
  if (param_2 == 0x6791) {
    uVar3 = *puVar2;
  }
  else {
    if (param_2 == 0x8764) {
      *param_3 = puVar2[3];
      return;
    }
    if (param_2 != 0x8765) {
      return;
    }
    uVar3 = puVar2[4];
  }
  *param_3 = uVar3;
  return;
}
