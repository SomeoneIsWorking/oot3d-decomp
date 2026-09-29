// OoT3D decomp @ 0030b500  name=FUN_0030b500  size=204

undefined4 FUN_0030b500(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_38 [12];
  undefined4 local_2c [2];
  char local_24;
  undefined1 auStack_20 [8];

  FUN_0030ab10(auStack_20,param_1);
  puVar1 = (uint *)FUN_003043ac(auStack_20);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  iVar2 = FUN_0030abf4(param_3);
  if (iVar2 == 0) {
    return 0;
  }
  local_2c[0] = 0xffffffff;
  local_24 = '\0';
  FUN_00495920(param_2,uVar3,local_2c);
  if (local_24 != '\0') {
    FUN_0030c3b4(auStack_38,iVar2,1);
    uVar3 = 0;
    if (*puVar1 != 0) {
      do {
        iVar2 = FUN_0030a560(auStack_38,uVar4);
        if (iVar2 == 0) {
          return 0;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *puVar1);
    }
  }
  return 1;
}
