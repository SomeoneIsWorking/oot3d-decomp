// OoT3D decomp @ 002f9e90  name=FUN_002f9e90  size=500

int FUN_002f9e90(uint param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5,
                undefined4 param_6,uint param_7,uint param_8)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;

  software_interrupt(0x28);
  while( true ) {
    if (0x1000 < param_4) {
      FUN_003123c0();
    }
    uVar5 = param_4;
    uVar3 = param_3;
    if (param_3 == 0 || param_4 == 0) {
      uVar5 = 0;
      uVar3 = uVar5;
    }
    FUN_0030db4c();
    FUN_0030dab0();
    iVar2 = FUN_0044b0b0(*(undefined4 *)(DAT_002fa084 + 0x9c),param_1,param_2,uVar3,uVar5,param_5);
    if (-1 < iVar2 && (param_2 & 0x10000) != 0) {
      FUN_0044af80();
      if (*DAT_002fa088 != 0) {
        software_interrupt(0x23);
        *DAT_002fa088 = 0;
      }
      if (*DAT_002fa08c != 0) {
        software_interrupt(0x23);
        *DAT_002fa08c = 0;
      }
      if (*DAT_002fa090 != 0) {
        software_interrupt(0x23);
        *DAT_002fa090 = 0;
      }
    }
    FUN_0030da40();
    uVar5 = *DAT_002fa094;
    software_interrupt(0x14);
    uVar3 = uVar5 >> 0x1b;
    if ((uVar5 & 0x80000000) != 0) {
      uVar3 = uVar3 - 0x20;
    }
    if ((uVar3 != 0xfffffff9 && uVar3 != 0) && uVar3 != 1) {
      FUN_003351b4(uVar5);
    }
    iVar4 = (iVar2 >> 0x1f) + 1;
    bVar6 = iVar4 != 0;
    if (!bVar6) {
      iVar4 = 0x800000;
    }
    if ((bVar6 || iVar4 != iVar2 * 0x400000) ||
       (param_8 == DAT_002fa098[1] && param_7 == *DAT_002fa098)) break;
    if (param_8 != DAT_002fa09c[1] || param_7 != *DAT_002fa09c) {
      software_interrupt(0x28);
      uVar3 = param_8 - (param_2 + (param_7 < param_1));
      lVar1 = (ulonglong)(param_7 - param_1) * 3 +
              CONCAT44(((int)uVar3 >> 0x1f) * DAT_002fa0a0 +
                       (int)((ulonglong)DAT_002fa0a0 * (ulonglong)uVar3 >> 0x20),
                       (int)((ulonglong)DAT_002fa0a0 * (ulonglong)uVar3)) +
              CONCAT44(uVar3 * 3,
                       (int)((ulonglong)DAT_002fa0a0 * (ulonglong)(param_7 - param_1) >> 0x20));
      iVar4 = (int)((ulonglong)lVar1 >> 0x20);
      bVar6 = param_7 < (uint)lVar1;
      if ((int)(param_8 - (iVar4 + (uint)bVar6)) < 0 !=
          (SBORROW4(param_8,iVar4) != SBORROW4(param_8 - iVar4,(uint)bVar6))) {
        return iVar2;
      }
    }
    FUN_0030e604((int)((ulonglong)DAT_002fa0a4 * 10),(int)((ulonglong)DAT_002fa0a4 * 10 >> 0x20));
  }
  return iVar2;
}
