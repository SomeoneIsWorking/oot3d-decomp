// OoT3D decomp @ 002bef1c  name=FUN_002bef1c  size=240

undefined4 FUN_002bef1c(char *param_1,uint *param_2,short *param_3)

{
  char cVar1;
  ushort uVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;

  cVar1 = *param_1;
  bVar7 = cVar1 == 'L';
  puVar3 = (ushort *)(param_1 + 1);
  if (bVar7) {
    puVar3 = (ushort *)(param_1 + 2);
    cVar1 = (char)*(ushort *)(param_1 + 1);
  }
  if (bVar7 && cVar1 == '2') {
    uVar2 = *puVar3;
    uVar4 = *(uint *)(puVar3 + 1);
    uVar4 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
            (uint)*(byte *)((int)puVar3 + 5);
    *param_2 = (uint)(byte)puVar3[3] << 0x18 | (uint)*(byte *)((int)puVar3 + 7) << 0x10 |
               (uint)(byte)puVar3[4] << 8 | (uint)*(byte *)((int)puVar3 + 9);
    param_2[1] = uVar4;
    uVar5 = param_2[1];
    uVar6 = *param_2;
    if ((int)uVar4 < 0) {
      uVar5 = uVar5 & 0x7fffffff;
    }
    *param_3 = (puVar3[5] << 8 | puVar3[5] >> 8) + 1;
    if (((uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8)) ==
        (uVar6 >> 0x10 ^ uVar5 >> 0x10 ^ 0xaaaa ^ uVar5 & 0xffff ^ uVar6 & 0xffff)) {
      return 1;
    }
  }
  return 0;
}
