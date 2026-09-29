// OoT3D decomp @ 002faf90  name=FUN_002faf90  size=224

uint FUN_002faf90(byte *param_1,uint param_2,ushort param_3)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  ushort local_216 [257];

  uVar4 = 0;
  do {
    iVar5 = 4;
    uVar3 = uVar4;
    do {
      if ((uVar3 & 1) == 0) {
        uVar3 = uVar3 >> 1;
      }
      else {
        uVar3 = DAT_002fb070 ^ uVar3 >> 1;
      }
      if ((uVar3 & 1) == 0) {
        uVar3 = uVar3 >> 1;
      }
      else {
        uVar3 = DAT_002fb070 ^ uVar3 >> 1;
      }
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    puVar6 = local_216 + uVar4;
    uVar4 = uVar4 + 1;
    *puVar6 = (ushort)uVar3;
  } while (uVar4 < 0x100);
  uVar4 = (uint)param_3;
  if (param_2 != 0) {
    pbVar2 = param_1 + -1;
    if ((param_2 & 1) != 0) {
      uVar4 = (uint)(ushort)(local_216[(*param_1 ^ uVar4) & 0xff] ^ param_3 >> 8);
      pbVar2 = param_1;
    }
    bVar1 = pbVar2[1];
    for (param_2 = param_2 >> 1; param_2 != 0; param_2 = param_2 - 1) {
      uVar3 = (uint)bVar1;
      bVar1 = pbVar2[3];
      uVar4 = (uint)(ushort)(local_216[((uint)pbVar2[2] ^
                                       (uint)local_216[(uVar3 ^ uVar4) & 0xff] ^ uVar4 >> 8) & 0xff]
                            ^ local_216[(uVar3 ^ uVar4) & 0xff] >> 8);
      pbVar2 = pbVar2 + 2;
    }
  }
  return uVar4;
}
