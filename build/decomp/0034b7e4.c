// OoT3D decomp @ 0034b7e4  name=FUN_0034b7e4  size=36

void FUN_0034b7e4(int param_1,int param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  char cVar7;
  short asStack_24 [2];
  ushort auStack_20 [8];
  
  FUN_00370734(param_1 + 0x1a4);
  iVar4 = DAT_0034bab8;
  if (*(int *)(param_1 + 0xaa8) != 2) {
    iVar3 = FUN_0036bc98(param_1,param_2);
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0xaa8) = 2;
      return;
    }
    FUN_00363a20(param_2,param_1,auStack_20,asStack_24);
    if (0x140 < auStack_20[0]) {
      return;
    }
    if (asStack_24[0] < 0) {
      return;
    }
    bVar6 = asStack_24[0] == 0xf0;
    if (asStack_24[0] < 0xf1) {
      bVar6 = *(int *)(param_1 + 0xaa8) == 0;
    }
    if (!bVar6) {
      return;
    }
    iVar3 = FUN_0036bb28(DAT_0034bac0,param_1,param_2);
    if (iVar3 != 1) {
      return;
    }
    if (*(short *)(param_2 + 0x104) == 0xc) {
      if ((*(uint *)(param_1 + 0xb00) & 0x10) == 0) {
        if ((*(uint *)(param_1 + 0xb00) & 0x18) != 0) {
          return;
        }
        uVar2 = (undefined2)DAT_0034bad8;
      }
      else {
        uVar1 = *(ushort *)(DAT_0034bac4 + 0xfe);
        cVar7 = (uVar1 & 1) != 0;
        if ((uVar1 & 2) != 0) {
          cVar7 = cVar7 + '\x01';
        }
        if ((uVar1 & 4) != 0) {
          cVar7 = cVar7 + '\x01';
        }
        if ((uVar1 & 8) != 0) {
          cVar7 = cVar7 + '\x01';
        }
        if (cVar7 == '\0') {
          uVar2 = (undefined2)DAT_0034bac8;
        }
        else if (cVar7 == '\x01') {
          uVar2 = (undefined2)DAT_0034bacc;
        }
        else if (cVar7 == '\x02') {
          uVar2 = (undefined2)DAT_0034bad0;
        }
        else {
          if (cVar7 != '\x03') {
            return;
          }
          uVar2 = (undefined2)DAT_0034bad4;
        }
      }
    }
    else {
      if (*(short *)(param_2 + 0x104) != 0x39) {
        return;
      }
      uVar1 = *(ushort *)(param_1 + 0x1c) & 3;
      if ((*(ushort *)(param_1 + 0x1c) & 3) == 0) {
        if ((*(uint *)(DAT_0034badc + 0xbc) & *(uint *)(DAT_0034bae0 + 0xc)) == 0) {
          *(short *)(param_1 + 0x116) = (short)DAT_0034baf0;
          return;
        }
        uVar2 = (undefined2)DAT_0034baec;
      }
      else if (uVar1 == 1) {
        if ((*(uint *)(DAT_0034badc + 0xbc) & *(uint *)(DAT_0034bae0 + 0xc)) == 0) {
          uVar5 = DAT_0034baf8;
          if ((*(ushort *)(iVar4 + 0x3e) & 0x40) == 0) {
            uVar5 = DAT_0034bafc;
          }
          uVar2 = (undefined2)uVar5;
        }
        else {
          uVar2 = (undefined2)DAT_0034baf4;
        }
      }
      else if (uVar1 == 2) {
        if ((*(uint *)(DAT_0034badc + 0xbc) & *(uint *)(DAT_0034bae0 + 0xc)) == 0) {
          uVar5 = DAT_0034bb04;
          if ((*(ushort *)(iVar4 + 0x3e) & 0x100) == 0) {
            uVar5 = DAT_0034bb08;
          }
          uVar2 = (undefined2)uVar5;
        }
        else {
          uVar2 = (undefined2)DAT_0034bb00;
        }
      }
      else {
        if (uVar1 != 3) {
          return;
        }
        uVar5 = DAT_0034bae4;
        if ((*(uint *)(DAT_0034badc + 0xbc) & *(uint *)(DAT_0034bae0 + 0xc)) != 0) {
          uVar5 = DAT_0034bae8;
        }
        uVar2 = (undefined2)uVar5;
      }
    }
    *(undefined2 *)(param_1 + 0x116) = uVar2;
    return;
  }
  uVar5 = 2;
  iVar3 = FUN_003769d8(param_2 + 0x28a0);
  if (iVar3 != 6) goto LAB_0034b8e4;
  if (*(short *)(param_2 + 0x104) == 0xc) {
    iVar4 = FUN_00346964(param_2);
    if (iVar4 != 0) {
      if (*(short *)(param_1 + 0x116) == 0x6007) {
        FUN_00375c10(param_2,*(undefined4 *)(param_1 + 0xb04));
        uVar5 = 0;
      }
      else {
        uVar5 = 3;
        *(undefined4 *)(param_1 + 0xa48) = DAT_0034babc;
      }
    }
    goto LAB_0034b8e4;
  }
  if ((*(short *)(param_2 + 0x104) != 0x39) || (iVar3 = FUN_00346964(param_2), iVar3 == 0))
  goto LAB_0034b8e4;
  if (*(short *)(param_1 + 0x116) == 0x6061) {
    uVar1 = *(ushort *)(iVar4 + 0x3e) | 0x40;
LAB_0034b8dc:
    *(ushort *)(iVar4 + 0x3e) = uVar1;
  }
  else if (*(short *)(param_1 + 0x116) == 0x6064) {
    uVar1 = *(ushort *)(iVar4 + 0x3e) | 0x100;
    goto LAB_0034b8dc;
  }
  uVar5 = 0;
LAB_0034b8e4:
  *(undefined4 *)(param_1 + 0xaa8) = uVar5;
  return;
}

