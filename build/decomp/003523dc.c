// OoT3D decomp @ 003523dc  name=FUN_003523dc  size=312

void FUN_003523dc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  
  iVar1 = DAT_003524d8;
  if (*(char *)(DAT_003524d8 + 0x15) != param_1) {
    *(char *)(DAT_003524d8 + 0x15) = (char)param_1;
    *(undefined4 *)(iVar1 + 0xdc) = 0;
    puVar3 = DAT_003524e8;
    uVar2 = DAT_003524e0;
    if (param_1 != 0) {
      if (*(char *)(iVar1 + 0x13) == '\0') {
        *(undefined4 *)(iVar1 + 0xdc) = *(undefined4 *)(iVar1 + 0xd4);
        *(undefined4 *)(iVar1 + 0xe4) = 0;
        iVar4 = (int)*(short *)(iVar1 + 0x4a);
        if (iVar4 < 0x41) {
          if (iVar4 + 0x40 < 0 == SCARRY4(iVar4,0x40)) {
            *puVar3 = (char)*(short *)(iVar1 + 0x4a);
          }
          else {
            *puVar3 = 0xc0;
          }
        }
        else {
          *puVar3 = 0x40;
        }
        iVar4 = (int)*(short *)(iVar1 + 0x4c);
        if (iVar4 < 0x41) {
          if (iVar4 + 0x40 < 0 == SCARRY4(iVar4,0x40)) {
            puVar3[1] = (char)*(short *)(iVar1 + 0x4c);
          }
          else {
            puVar3[1] = 0xc0;
          }
        }
        else {
          puVar3[1] = 0x40;
        }
        *(undefined *)(iVar1 + 0x13) = 1;
      }
      *(undefined4 *)(iVar1 + 0xe0) = *(undefined4 *)(iVar1 + 0xdc);
      FUN_00355fac(0,2,0x28,0xf);
      FUN_00355fac(3,2,0x28,0xf);
      FUN_0033c98c(0x28,0xf);
      return;
    }
    *(undefined4 *)(iVar1 + 0xe4) = 0;
    *(undefined4 *)(iVar1 + 0xe8) = 0;
    *(undefined *)(iVar1 + 0x13) = 0;
    *(undefined4 *)(iVar1 + 0xe0) = uVar2;
    FUN_002d6798(0);
    FUN_0048961c(DAT_003524e4);
    FUN_00347cc4(0);
    *(undefined *)(iVar1 + 0x1d) = 0;
    *(undefined2 *)(iVar1 + 0x44) = 0;
    *(undefined *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x94) = 0;
    FUN_0033c950(0xd);
    *(undefined *)(iVar1 + 0x1c) = 0;
  }
  return;
}

