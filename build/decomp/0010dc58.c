// OoT3D decomp @ 0010dc58  name=FUN_0010dc58  size=292

void FUN_0010dc58(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;

  iVar7 = *(int *)(DAT_0010dd7c + param_2);
  iVar5 = FUN_0036bc98(param_1);
  iVar4 = DAT_0010dd80;
  uVar3 = (ushort)DAT_0010dd80;
  if (iVar5 == 0) {
    sVar1 = *(short *)(param_1 + 0x92);
    sVar2 = *(short *)(param_1 + 0xbe);
    *(ushort *)(DAT_0010dd88 + param_1) = uVar3;
    if (((int)(short)(sVar1 - sVar2) + 0x2150U <= DAT_0010ddac) &&
       (*(int *)(param_1 + 0x98) < DAT_0010ddb0)) {
      FUN_0036bbd0(DAT_0010ddb4,param_1,param_2,8);
      *(ushort *)(param_1 + 0x440) = *(ushort *)(param_1 + 0x440) | 1;
      return;
    }
  }
  else {
    iVar5 = FUN_0036bc84(param_2);
    if (iVar5 != 8) {
      if ((*(ushort *)(DAT_0010dd90 + 0xe) & 1) == 0) {
        if (*(char *)((uint)*(byte *)(DAT_0010dd9c + 0x30) + DAT_0010dda0) == '0') {
          *(short *)(DAT_0010dd88 + iVar7) = (short)DAT_0010dda4;
          uVar6 = DAT_0010dda8;
        }
        else {
          *(ushort *)(DAT_0010dd88 + iVar7) = uVar3;
          uVar6 = DAT_0010dda8;
        }
      }
      else {
        *(short *)(DAT_0010dd88 + iVar7) = (short)DAT_0010dd94;
        uVar6 = DAT_0010dd98;
      }
      *(undefined4 *)(param_1 + 0x444) = uVar6;
      return;
    }
    FUN_00372244(param_2 + 0x5fcc,0x1e,DAT_0010dd84);
    *(ushort *)(DAT_0010dd88 + iVar7) = uVar3 | (ushort)(iVar4 >> 0xb);
    *(undefined4 *)(param_1 + 0x444) = DAT_0010dd8c;
  }
  return;
}
