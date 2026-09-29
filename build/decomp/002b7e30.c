// OoT3D decomp @ 002b7e30  name=FUN_002b7e30  size=416

int FUN_002b7e30(undefined4 param_1,undefined4 param_2,int param_3,ushort *param_4,uint param_5,
                uint param_6)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  ushort *puVar5;
  uint uVar6;
  int iVar7;
  int local_3c;
  byte local_37;
  undefined4 uStack_34;
  undefined4 local_30;
  int iStack_2c;
  ushort *puStack_28;

  iVar7 = 0;
  uVar6 = 0;
  uStack_34 = param_1;
  local_30 = param_2;
  iStack_2c = param_3;
  puStack_28 = param_4;
  if (param_5 != 0) {
    do {
      if (param_6 == 0) {
        puVar5 = param_4 + 1;
        uVar4 = (uint)*param_4;
      }
      else {
        if (param_4 == (ushort *)0x0) {
LAB_002b7f2c:
          iVar2 = 0;
          uVar4 = 0;
        }
        else {
          bVar1 = (byte)*param_4;
          if (bVar1 < 0x80) {
            uVar4 = (uint)(byte)*param_4;
            iVar2 = 1;
          }
          else if ((bVar1 & 0xe0) == 0xc0) {
            iVar2 = 2;
            uVar4 = *(byte *)((int)param_4 + 1) & 0x3f | ((byte)*param_4 & 0x1f) << 6;
          }
          else if ((bVar1 & 0xf0) == 0xe0) {
            iVar2 = 3;
            uVar4 = ((uint)(byte)*param_4 << 0x1c) >> 0x10 |
                    (*(byte *)((int)param_4 + 1) & 0x3f) << 6 | (byte)param_4[1] & 0x3f;
          }
          else {
            if ((bVar1 & 0xf8) != 0xf0) goto LAB_002b7f2c;
            iVar2 = 4;
            uVar4 = *(byte *)((int)param_4 + 3) & 0x3f |
                    ((uint)(byte)*param_4 << 0x1d) >> 0xb |
                    (*(byte *)((int)param_4 + 1) & 0x3f) << 0xc | ((byte)param_4[1] & 0x3f) << 6;
          }
        }
        puVar5 = (ushort *)((int)param_4 + iVar2);
      }
      if (1 < param_6) {
        uVar4 = 0;
      }
      iVar2 = FUN_002d2674(local_30,uVar4,&local_3c);
      if (iVar2 == 0) {
        uVar3 = FUN_002d2664(local_30);
        iVar2 = FUN_002d2674(local_30,uVar3,&local_3c);
        if (iVar2 != 0) goto joined_r0x002b7f98;
LAB_002b7fac:
        uVar4 = 0;
      }
      else {
joined_r0x002b7f98:
        if (local_3c == 0) goto LAB_002b7fac;
        uVar4 = (uint)local_37;
      }
      uVar6 = uVar6 + 1;
      iVar7 = iVar7 + uVar4 + param_3;
      param_4 = puVar5;
    } while (uVar6 < param_5);
  }
  return iVar7;
}
