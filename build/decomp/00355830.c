// OoT3D decomp @ 00355830  name=FUN_00355830  size=540

void FUN_00355830(int param_1,char param_2)

{
  int iVar1;
  uint *puVar2;
  sbyte *psVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  iVar4 = DAT_00355a58;
  psVar3 = DAT_00355a54;
  puVar2 = DAT_00355a50;
  iVar1 = DAT_00355a4c;
  iVar6 = DAT_00355a4c + 0xa6;
  if (param_1 == 0) {
    uVar5 = (uint)*DAT_00355a5c;
    param_2 = param_2 + *(char *)(uVar5 + iVar6);
    *(char *)(uVar5 + iVar6) = param_2;
    uVar7 = (uint)*(ushort *)
                   (iVar4 + ((int)(*(uint *)(iVar1 + 0xb8) & puVar2[6]) >> psVar3[6]) * 2 + 0x30);
    if ((int)uVar7 <= (int)param_2) goto LAB_00355890;
    if (-1 < param_2) {
      return;
    }
  }
  else if (param_1 == 1) {
    uVar5 = (uint)DAT_00355a5c[1];
    param_2 = param_2 + *(char *)(uVar5 + iVar6);
    *(char *)(uVar5 + iVar6) = param_2;
    uVar7 = (uint)*(ushort *)
                   (iVar4 + ((int)(*(uint *)(iVar1 + 0xb8) & puVar2[7]) >> psVar3[7]) * 2 + 0x38);
    if ((int)uVar7 <= (int)param_2) goto LAB_00355890;
    if (-1 < param_2) {
      return;
    }
  }
  else {
    if (param_1 != 9) {
      if (param_1 == 3) {
        uVar5 = (uint)DAT_00355a5c[3];
        param_2 = param_2 + *(char *)(uVar5 + iVar6);
        *(char *)(uVar5 + iVar6) = param_2;
        uVar7 = (uint)*(ushort *)(iVar4 + ((int)(*(uint *)(iVar1 + 0xb8) & *puVar2) >> *psVar3) * 2)
        ;
        if ((int)param_2 < (int)uVar7) {
          if (-1 < param_2) {
            return;
          }
          goto LAB_003558a4;
        }
      }
      else if (param_1 == 6 || param_1 == 0x58) {
        uVar5 = (uint)DAT_00355a5c[6];
        param_2 = param_2 + *(char *)(uVar5 + iVar6);
        *(char *)(uVar5 + iVar6) = param_2;
        uVar7 = (uint)*(ushort *)
                       (iVar4 + ((int)(*(uint *)(iVar1 + 0xb8) & puVar2[5]) >> psVar3[5]) * 2 + 0x28
                       );
        if ((int)param_2 < (int)uVar7) {
          if (-1 < param_2) {
            return;
          }
          goto LAB_003558a4;
        }
      }
      else {
        if (param_1 != 2) {
          if (param_1 != 0x10) {
            return;
          }
          uVar5 = (uint)DAT_00355a5c[0x10];
          param_2 = param_2 + *(char *)(uVar5 + iVar6);
          goto LAB_00355a40;
        }
        uVar5 = (uint)DAT_00355a5c[2];
        param_2 = param_2 + *(char *)(uVar5 + iVar6);
        *(char *)(uVar5 + iVar6) = param_2;
        uVar7 = (uint)*(ushort *)
                       (iVar4 + ((int)(*(uint *)(iVar1 + 0xb8) & puVar2[1]) >> psVar3[1]) * 2 + 8);
        if ((int)param_2 < (int)uVar7) {
          if (-1 < param_2) {
            return;
          }
          goto LAB_003558a4;
        }
      }
LAB_00355890:
      *(char *)(uVar5 + iVar6) = (char)uVar7;
      return;
    }
    uVar5 = (uint)DAT_00355a5c[9];
    param_2 = param_2 + *(char *)(uVar5 + iVar6);
    *(char *)(uVar5 + iVar6) = param_2;
    if ('1' < param_2) {
      param_2 = '2';
LAB_00355a40:
      *(char *)(uVar5 + iVar6) = param_2;
      return;
    }
    if (-1 < param_2) {
      return;
    }
  }
LAB_003558a4:
  *(undefined *)(uVar5 + iVar6) = 0;
  return;
}

