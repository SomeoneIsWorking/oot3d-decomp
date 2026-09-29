// OoT3D decomp @ 0040d674  name=FUN_0040d674  size=200

void FUN_0040d674(int param_1,undefined1 *param_2,undefined1 *param_3,uint param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined1 uVar7;
  uint local_18;

  local_18 = param_4;
  iVar2 = FUN_003043c0(param_1,&local_18,8);
  if (iVar2 == 0) {
    *param_2 = 0x7f;
    if (param_4 != 0) {
      puVar3 = param_3 + -1;
      if ((param_4 & 1) != 0) {
        *param_3 = 0;
        puVar3 = param_3;
      }
      for (param_4 = param_4 >> 1; param_4 != 0; param_4 = param_4 - 1) {
        puVar3[1] = 0;
        puVar3 = puVar3 + 2;
        *puVar3 = 0;
      }
    }
  }
  else {
    puVar3 = (undefined1 *)(local_18 + param_1);
    *param_2 = *puVar3;
    uVar6 = (uint)(byte)puVar3[1];
    if (2 < uVar6) {
      uVar6 = 2;
    }
    if (uVar6 != 0) {
      puVar4 = puVar3 + 1;
      puVar5 = param_3 + -1;
      if ((uVar6 & 1) != 0) {
        puVar4 = puVar3 + 2;
        *param_3 = *puVar4;
        puVar5 = param_3;
      }
      uVar7 = puVar4[1];
      iVar2 = (int)uVar6 >> 1;
      if (iVar2 != 0) {
        do {
          uVar1 = puVar4[2];
          puVar5[1] = uVar7;
          uVar7 = puVar4[3];
          iVar2 = iVar2 + -1;
          puVar5 = puVar5 + 2;
          *puVar5 = uVar1;
          puVar4 = puVar4 + 2;
        } while (iVar2 != 0);
        return;
      }
    }
  }
  return;
}
