// OoT3D decomp @ 0043bc10  name=FUN_0043bc10  size=404

void FUN_0043bc10(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;

  if (-1 < param_1[0x41]) {
    return;
  }
  iVar2 = FUN_0031b9c0(*param_1,0);
  if (iVar2 == 0) {
    return;
  }
  param_1[0x41] = 1;
  param_1[0x44] = param_1[1];
  param_1[0x42] = param_1[0x3f];
  param_1[0x43] = param_1[0x40];
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) ^ 1;
  uVar3 = *(undefined4 *)(*param_1 + 4);
  uVar4 = FUN_00303ea8(*param_1);
  ObjectBankArchive_0031b124(param_1 + (char)param_1[6] * 0x1c + 7,uVar4,uVar3,0);
  *(undefined1 *)((int)param_1 + (char)param_1[6] + 0x19) = 1;
  iVar2 = FUN_00303ea8(*param_1);
  param_1[1] = iVar2;
  iVar2 = FUN_0031488c(param_1[0x45],param_1 + (char)param_1[6] * 0x1c + 7,
                       *(undefined1 *)((int)param_1 + 0x11a),0);
  param_1[0x3f] = iVar2;
  iVar5 = FUN_0031488c(param_1[0x45],param_1 + (char)param_1[6] * 0x1c + 7,
                       *(undefined1 *)((int)param_1 + 0x11a),1);
  iVar2 = DAT_0043bda4;
  param_1[0x40] = iVar5;
  param_1[2] = iVar2;
  param_1[3] = DAT_0043bda8;
  param_1[4] = DAT_0043bdac;
  param_1[5] = DAT_0043bdb0;
  bVar1 = *(byte *)((int)param_1 + 0x11a);
  iVar2 = DAT_0043bdb8;
  if (bVar1 != 0xf) {
    if (bVar1 < 0x10) {
      if (((bVar1 != 0xb && bVar1 != 0xc) && bVar1 != 0xd) && bVar1 != 0xe) goto LAB_0043bd88;
    }
    else if (bVar1 != 0x10) {
      if (bVar1 == 0x2b || bVar1 == 0x39) {
        param_1[5] = DAT_0043bdbc;
        param_1[3] = DAT_0043bdc0;
        goto LAB_0043bd88;
      }
      iVar2 = DAT_0043bdb4;
      if (bVar1 != 0x74) goto LAB_0043bd88;
    }
  }
  param_1[5] = iVar2;
LAB_0043bd88:
  FUN_0031b99c(*param_1);
  *param_1 = 0;
  *(undefined1 *)((int)param_1 + 0x11d) = 2;
  return;
}
