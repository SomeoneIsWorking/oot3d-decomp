// OoT3D decomp @ 0040526c  name=FUN_0040526c  size=260

undefined4 FUN_0040526c(int param_1,int param_2,undefined4 param_3)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_38 [2];
  char local_30;
  undefined1 auStack_2c [8];

  if (param_2 == 0) {
    return 0;
  }
  FUN_0030ab10(auStack_2c);
  puVar1 = (uint *)FUN_003043ac(auStack_2c);
  uVar4 = 0;
  if (*puVar1 != 0) {
    do {
      uVar5 = puVar1[uVar4 * 2 + 1];
      uVar6 = puVar1[uVar4 * 2 + 2];
      local_38[0] = 0xffffffff;
      local_30 = '\0';
      iVar2 = FUN_00495920(*(undefined4 *)(param_1 + 4),uVar5,local_38);
      if (iVar2 == 0) {
        return 0;
      }
      if (local_30 == '\0') {
        uVar3 = FUN_0048be78(*(undefined4 *)(param_1 + 4),uVar5);
        iVar2 = FUN_0030a884(param_1,uVar3,param_3,0,1);
      }
      else {
        iVar2 = FUN_0030a9a4(param_1,uVar5,uVar6,param_3,0);
      }
      if (iVar2 == 0) {
        return 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *puVar1);
  }
  return 1;
}
