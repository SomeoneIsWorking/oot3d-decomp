// OoT3D decomp @ 001a33a8  name=FUN_001a33a8  size=500

void FUN_001a33a8(int param_1,int param_2)

{
  int iVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  short *psVar5;
  bool bVar6;
  undefined4 uVar7;

  iVar4 = FUN_0036bc98();
  iVar1 = DAT_001a359c;
  if (iVar4 == 0) {
    psVar5 = (short *)(param_1 + 0xc00);
    if ((*psVar5 != 0) && (sVar2 = *psVar5 + -1, *psVar5 = sVar2, sVar2 == 0)) {
      FUN_00369c88(param_1,2);
    }
    if ((*(short *)(param_1 + 0xc0c) != 0) &&
       (sVar2 = *(short *)(param_1 + 0xc0c) + -1, *(short *)(param_1 + 0xc0c) = sVar2, sVar2 == 0))
    {
      FUN_00369c88(param_1,2);
    }
    iVar4 = FUN_00369bec(param_1,param_2);
    if (iVar4 == 0) {
      FUN_00375bcc(param_1,DAT_001a35a4);
      FUN_00369c88(param_1,1);
      *(undefined4 *)(param_1 + 0x978) = DAT_001a35a8;
      return;
    }
    if ((*(short *)(param_1 + 0xc08) == 0) ||
       (sVar2 = *(short *)(param_1 + 0xc08) + -1, *(short *)(param_1 + 0xc08) = sVar2, sVar2 == 0))
    {
      FUN_00375bcc(param_1,DAT_001a35ac);
      *(undefined2 *)(param_1 + 0xc08) = 0x40;
    }
    uVar7 = DAT_001a35b0;
    if ((*(uint *)(param_2 + 0xf8) & 8) != 0) {
      uVar7 = DAT_001a35b4;
    }
    FUN_0036e168(uVar7,DAT_001a35c0,DAT_001a35bc,DAT_001a35b8,param_1 + 100);
    sVar2 = *psVar5;
    bVar6 = sVar2 == 0;
    if (bVar6) {
      sVar2 = *(short *)(param_1 + 0xc0c);
    }
    if (bVar6 && sVar2 == 0) {
      sVar2 = FUN_0036bba8(param_2,0xd);
      *(short *)(param_1 + 0x116) = sVar2;
      if (sVar2 == 0) {
        if (*(short *)(param_1 + 0x1c) == 0) {
          if (*(short *)(DAT_001a35c4 + 0xe8) < 0x32) {
            if (*(short *)(DAT_001a35c4 + 0xe8) < 10) {
              if ((*(ushort *)(iVar1 + 0x42) & 0x40) == 0) {
                uVar3 = 0x26;
              }
              else {
                uVar3 = 0x27;
              }
            }
            else if ((*(ushort *)(iVar1 + 0x42) & 0x80) == 0) {
              uVar3 = 0x25;
            }
            else {
              uVar3 = 0x24;
            }
          }
          else {
            uVar3 = 0x29;
          }
        }
        else {
          uVar3 = 0x22;
        }
        *(undefined2 *)(param_1 + 0x116) = uVar3;
      }
      FUN_0036bb28(DAT_001a35c8,param_1,param_2);
      return;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x978) = DAT_001a35a0;
    if (*(short *)(param_1 + 0x1c) == 0) {
      *(ushort *)(iVar1 + -2) = *(ushort *)(iVar1 + -2) | 0x40;
    }
    if (*(short *)(param_1 + 0x116) == 0x26 || *(short *)(param_1 + 0x116) == 0x27) {
      *(ushort *)(iVar1 + 0x42) = *(ushort *)(iVar1 + 0x42) | 0x40;
    }
    if (*(short *)(param_1 + 0x116) == 0x24 || *(short *)(param_1 + 0x116) == 0x25) {
      *(ushort *)(iVar1 + 0x42) = *(ushort *)(iVar1 + 0x42) | 0x80;
    }
  }
  return;
}
