// OoT3D decomp @ 00498764  name=FUN_00498764  size=524

void FUN_00498764(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 auStack_114 [260];

  FUN_00306994();
  FUN_004983ec();
  switch(*(undefined1 *)(param_1 + 4)) {
  case 2:
    uVar6 = FUN_00306994();
    uVar4 = FUN_002c0cfc();
    if (5 < uVar4) {
      FUN_00498358(uVar6);
      uVar3 = 3;
      goto LAB_00498814;
    }
    break;
  case 3:
    uVar6 = FUN_00306994();
    iVar5 = FUN_002c0cfc();
    if (iVar5 != 0xb) {
      iVar5 = FUN_002c0cfc(uVar6);
      if (iVar5 == 0xc) {
        *(undefined1 *)(param_1 + 4) = 5;
      }
      return;
    }
    (**(code **)**(undefined4 **)(param_1 + 0x10))
              (*(undefined4 **)(param_1 + 0x10),*(undefined4 *)(param_1 + 8));
    uVar3 = 4;
LAB_00498814:
    *(undefined1 *)(param_1 + 4) = uVar3;
    return;
  case 4:
    FUN_00306994();
    iVar5 = FUN_002c0cfc();
    if (iVar5 == 0xc) {
      (**(code **)(**(int **)(param_1 + 0x10) + 4))();
      *(undefined1 *)(param_1 + 4) = 5;
      return;
    }
    break;
  case 6:
    uVar6 = FUN_00306994();
    iVar5 = FUN_002c0cfc();
    if (iVar5 == 6) {
      FUN_004983c8(uVar6);
      *(undefined1 *)(param_1 + 4) = 7;
      return;
    }
    break;
  case 7:
    FUN_00306994();
    iVar5 = FUN_002c0cfc();
    if (iVar5 == 2) {
      *(undefined1 *)(param_1 + 4) = 1;
      iVar5 = *(int *)(param_1 + 0xc);
      if (-1 < iVar5) {
        uVar6 = FUN_00306994();
        cVar1 = *(char *)(param_1 + 4);
        if (((cVar1 != '\x02' && cVar1 != '\x03') && cVar1 != '\x06') && cVar1 != '\a') {
          if (cVar1 == '\x01') {
            *(int *)(param_1 + 8) = iVar5;
            uVar2 = DAT_00498990;
            *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
            FUN_00306938(auStack_114,0x80,uVar2,iVar5);
            FUN_00306808(uVar6,auStack_114);
            *(undefined1 *)(param_1 + 4) = 2;
          }
          else {
            *(int *)(param_1 + 0xc) = iVar5;
            uVar6 = FUN_00306994();
            cVar1 = *(char *)(param_1 + 4);
            if ((((cVar1 != '\x02' && cVar1 != '\x03') && cVar1 != '\x06') && cVar1 != '\a') &&
                cVar1 != '\x01') {
              (**(code **)(**(int **)(param_1 + 0x10) + 4))();
              FUN_003067e4(uVar6);
              *(undefined1 *)(param_1 + 4) = 6;
              *(undefined4 *)(param_1 + 8) = 0xffffffff;
              return;
            }
          }
        }
      }
    }
    return;
  }
  return;
}
