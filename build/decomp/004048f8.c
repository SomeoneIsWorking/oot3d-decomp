// OoT3D decomp @ 004048f8  name=FUN_004048f8  size=232

undefined4 FUN_004048f8(int param_1,undefined4 *param_2,undefined4 param_3,int *param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *local_18;

  local_18 = param_4;
  FUN_0030af40(&local_18,param_1 + 0x2c);
  uVar6 = 0;
  do {
    iVar3 = param_1 + (uVar6 & 0xff) * 0xc;
    puVar2 = *(undefined4 **)(iVar3 + 4);
    while (puVar5 = puVar2, puVar5 != (undefined4 *)(iVar3 + 4)) {
      puVar2 = (undefined4 *)*puVar5;
      if (puVar5 + -1 == param_2) {
        FUN_0030c964(iVar3,puVar5);
        *(undefined1 *)(puVar5 + 3) = 4;
        FUN_00310148(puVar5 + 2);
        iVar3 = local_18[2];
        local_18[2] = iVar3 + -1;
        if (iVar3 + -1 == 0) {
          local_18[1] = 0;
          do {
            iVar4 = *local_18;
            iVar3 = -iVar4;
            bVar1 = (bool)hasExclusiveAccess(local_18);
          } while (!bVar1);
          *local_18 = iVar3;
          if (iVar4 != -1 && 0 < iVar3) {
            software_interrupt(0x22);
          }
        }
        return 1;
      }
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 3);
  FUN_0030aedc(&local_18);
  return 0;
}
