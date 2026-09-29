// OoT3D decomp @ 00274acc  name=FUN_00274acc  size=568

void FUN_00274acc(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;

  uVar2 = DAT_00274d08;
  uVar5 = (uint)*(ushort *)(param_2 + 0x2b7e);
  if (uVar5 == 4) {
    *(undefined4 *)(param_1 + 0x1a4) = DAT_00274d08;
    return;
  }
  if (uVar5 == 3) {
    FUN_0037547c(DAT_00274d14,0,4,DAT_00274d10,DAT_00274d10,DAT_00274d0c);
    if (-1 < *(short *)(param_1 + 0x1ac)) {
      FUN_00375c10(param_2);
    }
    iVar4 = DAT_00274d18;
    sVar1 = *(short *)(param_1 + 0x1a8);
    if (sVar1 == 1) {
      FUN_00375c10(param_2,(int)*(short *)(param_1 + 0x1ac));
      *(ushort *)(iVar4 + 0xf2) = *(ushort *)(iVar4 + 0xf2) | 0x200;
    }
    else if (sVar1 == 2) {
      iVar7 = param_2 + (uint)*(byte *)(param_2 + 0x3a5a) * 0x80;
      if (*(int *)(DAT_00274d1c + iVar7) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = iVar7 + 0x3a6c;
      }
      uVar6 = FUN_00375750(iVar7,10);
      FUN_0037573c(param_2,uVar6);
      uVar6 = DAT_00274d20;
      *(undefined1 *)(iVar4 + 0x7a2) = 1;
      FUN_0034e4fc(uVar6,0x87);
    }
    else if (sVar1 == 4) {
      iVar7 = param_2 + (uint)*(byte *)(param_2 + 0x3a5a) * 0x80;
      if (*(int *)(DAT_00274d1c + iVar7) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = iVar7 + 0x3a6c;
      }
      uVar6 = FUN_00375750(iVar7,0xb);
      FUN_0037573c(param_2,uVar6);
      *(undefined1 *)(iVar4 + 0x7a2) = 1;
    }
    else if (sVar1 == 6) {
      if (*(int *)(DAT_00274d18 + -0xdfc) == 0) {
        uVar6 = FUN_00375750(param_2 + 0x118,1);
        FUN_0037573c(param_2,uVar6);
      }
      else {
        iVar7 = param_2 + (uint)*(byte *)(param_2 + 0x3a5a) * 0x80;
        if (*(int *)(DAT_00274d1c + iVar7) == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = iVar7 + 0x3a6c;
        }
        uVar6 = FUN_00375750(iVar7,0);
        FUN_0037573c(param_2,uVar6);
      }
      *(undefined1 *)(iVar4 + 0x7a2) = 1;
      uVar3 = DAT_00274d10;
      uVar6 = DAT_00274d0c;
      *(ushort *)(iVar4 + 0xee) = *(ushort *)(iVar4 + 0xee) | 0x2000;
      FUN_0037547c(DAT_00274d14,0,4,uVar3,uVar3,uVar6);
    }
  }
  else if (8 < uVar5 - 5) {
    if (uVar5 != 1) {
      return;
    }
    *(uint *)(*(int *)(DAT_00274d04 + param_2) + 0x1714) =
         *(uint *)(*(int *)(DAT_00274d04 + param_2) + 0x1714) | 0x800000;
    return;
  }
  *(undefined2 *)(param_2 + 0x2b7e) = 4;
  *(undefined4 *)(param_1 + 0x1a4) = uVar2;
  return;
}
